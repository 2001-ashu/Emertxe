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
	var=`echo $i |tr [:upper:] [:lower:]`
	if [ $i != $var ]
	then
	    mv $i $var
	fi
    elif [ -d $i ]
    then
	var=`echo $i |tr [:lower:] [:upper:]`
	if [ $i != $var ]
	then
	    mv $i $var
	fi
    fi
done

Dont Run It...........

                     
 
     
     
            
            
           
   

