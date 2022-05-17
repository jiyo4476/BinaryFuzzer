import subprocess
import random
import time
import sys

#command = "./a {} {} | xxd -p | ./prog_0"
prng = random.randint(-2147483646, 2147483647)

program = 1

while True:
    for timesRun in range(1,100000,250):
        ts = random.randint(500, 100000)
        prng = random.randint(-2147483646, 2147483647)
        print('\n')
        print("Testing prog_{} \n prng:{}\t timesRun:{}.".format(program,prng,ts))
        result = subprocess.Popen("./fuzzer {} {} ".format(prng, ts) + "| xxd -p | ./AllTestPrograms/prog_{}".format(program), stdin=subprocess.PIPE, shell=True)
        #print(result.stderr)
        #resultBytes = subprocess.Popen(["xxd", "-p"], stderr=subprocess.PIPE, stdout=subprocess.PIPE, stdin=result.stdout)
        #print(resultBytes.stderr)
        #runProgram = subprocess.Popen(["./prog_0"], stderr=subprocess.PIPE, stdin=resultBytes.stdout, stdout=subprocess.PIPE, shell=True)
        #print(runProgram.stderr)
    

        result.communicate(timeout=30)[0]
        result.wait()
        #returncode = runProgram.returncode
        #print(out, err, runProgram.returncode)