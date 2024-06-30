<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
arr=($@)
if [ $# -gt 0 ]
then
    for i in ${arr[@]}
    do
	if [ -d $i ]
	then
	    cd $i
	    pwd
	else
	    echo "output_ls.sh: Cannot access $i : No such a file or directory."
	fi
    done
else
    echo *
fi

                     
 
     
     
            
            
           
   

