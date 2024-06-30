<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:

DOC
arr=(1 2 4 hello 5.788 fine Hi)

for var in `seq "${#arr[@]}"`
do

    echo "The Length of ${arr[$((var - 1))]} " is ${#arr[$((var - 1))]}                    
done
     
     
            
            
