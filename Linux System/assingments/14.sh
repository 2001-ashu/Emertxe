<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
day=`date +%A`
month=`date +%B`
date=`date +%d`
hour=`date +%H`
year=`date +%y`
time=`date +%r`
user=`whoami`
if [ $hour -gt 5 -a $hour -lt 12 ]
then
    echo "Good Morning $user,Have nice day!"
elif [ $hour -gt 12 -a $hour -lt 13 ]
then
echo "Good noon $user,Have nice day!"
elif [ $hour -gt 13 -a $hour -lt 17 ]
then
    echo "Good afternoon $user,Have nice day!"
elif [ $hour -gt 17 -a $hour -lt 21 ]
then
    echo "Good evening $user,Have nice day!"
else
    echo "Good night $user,Have nice day!"
fi
echo "This is $date $day in $month of $year ($time)" 

                     
 
     
     
            
            
           
   

