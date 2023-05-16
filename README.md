# Dinamica_Populacional_2016
Tarefa da Disciplina de laboratório de física computacional 1, da graduação de física computacional da UFF.

# Enunciado
O estudo de modelos matemáticos para prever a dinâmica populacional de espécies competidoras tem sua origem em trabalhos independentes publicados no início do século 20 por A. J. Lotka e
V. Volterra (ver, por exemplo, [Lo1], [LO2] e [VO]).
Considere o problema de prever a população de duas espécies, uma das quais é um predador, cuja população no tempo t é x2 (t), alimentando-se do outro, que é a presa, cuja população é de x1 (t).
Vamos supor que a presa tem sempre um abastecimento alimentar adequado e que sua taxa de natalidade a qualquer momento é proporcional ao número de presas vivas, nesse momento; isto é, taxa de natalidade (presas) é k1x1 (t). A morte taxa da presa depende tanto do número de presas e predadores vivos naquele momento. Pela simplicidade, assumirmos taxa de mortalidade (presa) = k2x1 (t) x2 (t). A taxa de natalidade do predador, por outro lado, depende no seu fornecimento alimentar, x1 (T), bem como no número de predadores disponíveis para fins de reprodução.
Por esta razão, assumimos que a taxa de natalidade (predador) é k3x1 (t) x2 (t). A taxa de mortalidade do predador será tomado como simplesmente proporcional ao número de predadores vivos no tempo; isto é, a taxa de morte (Predador) = k4x2 (t) desde x'1(t) e X'2(t) representam a mudança nas populações de presas e predadores, respectivamente, com respeito ao tempo.

Resolver este sistema para 0 ≤ t ≤ 4, assumindo que a população inicial da presa é de 1000 e do predadores é 500 e que são as constantes k1 = 3, K2 = 0,002, K3 = 0,0006, e k4 = 0,5. esboçar um gráfico das soluções para este problema, traçando as duas populações, com o tempo, e descrever a física fenômenos representados. Existe uma solução estável para este modelo população? Se assim for, por que valores x1 e X2 é a solução estável?
