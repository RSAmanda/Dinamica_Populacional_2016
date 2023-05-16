#include<stdio.h>
#include<math.h>
#define N 2

// proporção de natalidade de presas
#define K1 3.0

// proporção de mortalidade de presas (exceto por predação)
#define K2 0.002

// proporção de nataliade de predadores
#define K3 0.0006

// proporção de mortalidade de predadores
#define K4 0.5

typedef double (*equacoes) ();
//mudança populacional:

// presa
double f0(int m, double x, double y[m]) //dx1/dt
{	return K1*y[0] - K2*y[0]*y[1];
}

//predador
double f1(int m, double x, double y[m]) // dx2/dt
{	return K3*y[0]*y[1] - K4*y[1];	}

// método de Runge-Kutta
void rk4(int m, double x, double y[m], double h)// nesse caso, x é a variável temporal
{	double k1[m], k2[m], k3[m], k4[m], yp[m], ypp[m];
	equacoes f[]={f0, f1};// presa, predador
	int i;
	
	for(i=0; i<m; i++)
	{	k1[i]=f[i](m, x, y);
		yp[i]=y[i]+h/2*k1[i];
	}
	
	for(i=0; i<m; i++)
	{	k2[i]=f[i](m, x+h/2, yp);
		ypp[i]=y[i]+h/2*k2[i];
	}
	
	for(i=0; i<m; i++)
	{	k3[i]=f[i](m, x+h/2, ypp);
		yp[i]=y[i]+h*k3[i];
	}
	
	for(i=0; i<m; i++)
	{	k4[i]=f[i](m, x+h, yp);
		y[i]+=h/6*(k1[i]+2*k2[i]+2*k3[i]+k4[i]);
	}
}

int main(int argc, char** argv)
{	double a, b, h, m, x, y[N]={1000,500};
	int i;
	m=N;
	h=.0001;// "dt"
	a=0.; // inicio
	b=4.; // fim
	for(x=a; x<=b; x+=h)
	{	printf("%g", x);
		for(i=0;i<=m;i++)
		{
			printf("\t%g", y[i]);
		}
		rk4(m, x, y, h);
		printf("\n");
	}
}
