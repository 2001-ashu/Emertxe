<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
fs=(`df | cut -d " " -f1`)
used=(`df | tr -s " " | cut -d " " -f5`)
available=(`df | tr -s " " | cut -d " " -f4`)
mount=(`df | tr -s " " | cut -d " " -f6`)
flag=0
if [ $# -eq 0 ]
then
    echo "Error : Please pass the name of the file-system through command line."
    else
	for i in `seq ${#fs[@]}`
do
if [ "$1" == "${fs[$i]}" ]
then
   echo "File-system ${fs[i]} is mounted on ${mount[i]} and it is having ${used[i]} used space with ${available[i]} KB free."
   flag=1
fi
done
if [ $flag -eq 0 ]
then
    echo "$1 is not mounted."
fi
fi
                     
 
     
     
            
            
           
   

