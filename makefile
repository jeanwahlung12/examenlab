#tipo objeros

main:   main.o starks.o targaryen.o lannister.o pequenafamilianoble.o dothraki.o guardia.o
   g++ main.o stark.o targeryen.o lannister.o pequenafamilianoble.o dothraki.o guardia.o -o main

main.o: main.cpp stark.h targeryen.h lannister.h pequenafamilianoble.h dothraki.h guardia.h 
   g++ main.cpp

starks.o: starks.h stark.cpp pequenafamilianoble.h
   g++ -c starks.cpp

targaryen.o:   targaryen.h targaryen.cpp  dothraki.h
   g++ -c targaryen.cpp
lannister.o:   lannister.h lannister.cpp  guardia.h
   g++ -c  lannister.cpp

pequenafamilianoble.o:  pequenafamilianoble.h pequenafamilianoble.cpp
   g++ -c pequenafamilia.cpp

dothraki.o: dothraki.h dothraki.cpp
   g++ -c dothraki.cpp
guardia.o: guardia.h guardia.cpp
   g++ -c guardia.cpp

