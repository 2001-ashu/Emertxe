<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC

arr=(`ls`)
for i in ${arr[@]}
do
    if [ -f $i ]
    then
	var=$i |tr [:upper:] [:lower:]
	echo "$var"
	if [$i  =! $var ]
	then
	    var=$i |tr [:lower:] [:upper:]
	    echo "$var"
                     
 
     
     
            
            
           
   

