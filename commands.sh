for i in {0..8} ; do touch "../test-cases/input/input0${i}.txt"; done
g++ m.cpp && ./a.out > "../test-cases/input/input01.txt"
for i in {0..8} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done
for i in {0..8} ; do g++ b.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/woutput/output0${i}.txt" ; done

for i in {0..2} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done

for i in {3..5} ; do g++ m.cpp && ./a.out > "../test-cases/input/input0${i}.txt"; sleep 1; done
for i in {6..8} ; do g++ m.cpp && ./a.out > "../test-cases/input/input0${i}.txt"; sleep 1; done
for i in {3..5} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done
for i in {6..8} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done
for i in {3..8} ; do g++ s.cpp && ./a.out < "../test-cases/input/input0${i}.txt" > "../test-cases/output/output0${i}.txt" ; done

g++ s.cpp && ./a.out < "../test-cases/input/input00.txt" > "../test-cases/output/output00.txt"
