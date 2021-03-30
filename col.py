import os
import sys
if len(sys.argv) == 2:
    start_index = 1
    end_index = int(sys.argv[1])
elif len(sys.argv) == 3:
    start_index = int(sys.argv[1])
    end_index = int(sys.argv[2])
else:
    print('Please adhere to the specs.')
    exit(3)


for i in range(start_index, (end_index+1)):
    with open('Q'+str(i)+'.txt', 'w') as f:
        f.write(
            '#include <stdio.h>\n#include <math.h>\nvoid main() {\n\t\n\treturn;\n}')
    os.rename('Q'+str(i)+'.txt', 'Q'+str(i)+'.c')

print("Done!\n")
