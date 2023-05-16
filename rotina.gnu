set terminal pngcairo size 1024,768
set grid
set xlabel "Tempo"
set ylabel "População"
set title "Dinâmica Populacional"

set output "livrot4.png"

plot "livrot4.dat" u 1:2 w l t "Presa", "livrot4.dat" u 1:3 w l t "Predador"

set output

set output "livrot40.png"

plot "livrot40.dat" u 1:2 w l t "Presa", "livrot40.dat" u 1:3 w l t "Predador"

set output

set output "condinicial500t4.png"

plot "condinicial500t4.dat" u 1:2 w l t "Presa", "condinicial500t4.dat" u 1:3 w l t "Predador"

set output

set output "condinicial500t40.png"

plot "condinicial500t40.dat" u 1:2 w l t "Presa", "condinicial500t40.dat" u 1:3 w l t "Predador"

set output

set output "condinicial1000t4.png"

plot "condinicial1000t4.dat" u 1:2 w l t "Presa", "condinicial1000t4.dat" u 1:3 w l t "Predador"

set output

set output "condinicial1000t40.png"

plot "condinicial1000t40.dat" u 1:2 w l t "Presa", "condinicial1000t40.dat" u 1:3 w l t "Predador"

set output

set output "condinicialinversat4.png"

plot "condinicialinversat4.dat" u 1:2 w l t "Presa", "condinicialinversat4.dat" u 1:3 w l t "Predador"

set output

set output "condinicialinversat40.png"

plot "condinicialinversat40.dat" u 1:2 w l t "Presa", "condinicialinversat40.dat" u 1:3 w l t "Predador"

set output

set output "motnat00006.png"

plot "motnat00006.dat" u 1:2 w l t "Presa", "motnat00006.dat" u 1:3 w l t "Predador"

set output

set output "motnat05.png"

plot "motnat05.dat" u 1:2 w l t "Presa", "motnat05.dat" u 1:3 w l t "Predador"

set output
