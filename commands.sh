for i in {0..8} ; do touch "../test-cases/input/input0${i}.txt"; done
g++ m.cpp && ./a.out > "../test-cases/input/input01.txt"
for i in {0..8} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done
for i in {0..8} ; do g++ b.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/woutput/output0${i}.txt" ; done

for i in {0..2} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done

for i in {3..9} ; do g++ m.cpp && ./a.out > "../test-cases/input/input0${i}.txt"; sleep 0.5; done
for i in {3..9} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done

for i in {6..9} ; do g++ m.cpp && ./a.out > "../test-cases/input/input0${i}.txt"; sleep 0.5; done
for i in {6..9} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done
