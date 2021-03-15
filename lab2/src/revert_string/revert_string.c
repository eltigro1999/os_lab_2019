#include "revert_string.h"
#include <stdlib.h>
#include <string.h>
void RevertString(char *str)
{
	char* str_tmp=(char*)malloc(strlen(str)+1);
	for(int i=0;i<strlen(str)+1;++i)
	{
		str_tmp[i]=str[strlen(str)-i-1];
	}
	for(int i=0;strcmp(str,str_tmp)!=0;++i)
	{
		str[i]=str_tmp[i];
	}
	free(str_tmp);
}

