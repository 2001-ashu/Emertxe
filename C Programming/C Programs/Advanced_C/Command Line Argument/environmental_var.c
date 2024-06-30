// #include<stdio.h>
// #include<string.h>
// #include<stdlib.h>
// int main(int argc,char *argv[],char *envp[])
// {
//      char *ptr,*env;
//      int i=0;
//      while (envp[i]!=NULL)
//      {
//         ptr=strtok(envp[i],"=");
//         if (!(strcmp(argv[1],ptr)))
//         {
//             env=strtok(NULL,"=");
//             break;
//         }
//         i++;

//      }
//      printf("%s\n",env);

// }
#include <stdio.h>

// Most of the C compilers support a third parameter to main which
// store all environment variables
int main(int argc, char *argv[], char *envp[])
{
    int i;
    for (i = 0; envp[i]; i++)
        printf("\n%s", envp[i]);
    getchar();
    return 0;
}
