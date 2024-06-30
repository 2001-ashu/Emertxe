<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
if [ $# -eq 0 ]
then
    echo "Please pass CLA"
else
    for i in ${arr[@]}
    do
	echo "Length Of String ($i) : ${#i}"

    done
fi
     
     
            
            
           
   

