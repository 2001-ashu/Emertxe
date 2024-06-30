<<DOC
Name:
Date:
DESCRIPTION:
SAMPLE I/P:
SAMPLE O/P:
DOC
ch='y'
while [ $ch = 'y' -o $ch = 'Y' ]
do 
        echo "1.Currently logged users"
	echo "2.Your shell directory"
	echo "3.Home Directory"
        echo "4.OS name & version"
	echo "5.Current working directory"
	echo "6.Number of users of logged in"
	echo "7.Show all availabe shells in your system"
	echo "8.Hard disk information"
	echo "9.CPU Information"
	echo "10.Memory Information"
	echo "11. File system information"
	echo "12.Currently running process"
	read -p "Enter Your Choice..:" n
    
    case $n in
	1)
	    echo "1.Currently logged users : `whoami`"
	    ;;
	2)
	    echo "2.Your shell directory: `echo $SHELL`"
	    ;;
	3)
	    echo "3.Home Directory `echo ~`"
	    ;;
	4)
	    echo "4.OS name & version `uname -sv`"
	    ;;
	5)
	    echo "5.Current working directory `pwd`"
	    ;;
	6)
	    echo "6.Number of users of logged in `who -q`"
	    ;;
	7)
	    echo "7.Show all availabe shells in your system `cat /etc/shells`"
	    ;;
	8)
	    echo "8.Hard disk information `hwinfo`"
	    ;;
	9)
            echo "9.CPU Information `cat /proc/cpuinfo`"
	    ;;
	10)
	    echo "10.Memory Information `cat /proc/meminfo`"
	    ;;
	11)
	    echo "11. File system information `df`"
	    ;;
	12)
	    echo "12.Currently running process `ps`"
	    ;;
	*)
	    echo "Invalid "
    esac
    read -p "Do you want to continue Y/N:" ch

done                 
 
     
     
            
            
           
   

