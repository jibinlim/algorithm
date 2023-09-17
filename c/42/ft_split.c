#include <stdlib.h>

int sep_in_str(char str, char *sep)
{
   while(*sep)
   {
	   if(str == *sep)
		   return(1);
	   sep++;
   }
   return (0);
}

int count_word(char *str, char *sep)
{
  int i = 0;
  int count = 0;
  if(!sep)
	return (1);
  while(str[i])
  {
	  while(sep_in_str(str[i],sep) && str[i])
		  i++;
	  if(!sep_in_str(str[i],sep))
		  count ++;
	  while(!sep_in_str(str[i],sep) && str[i])
		  i++;
  }
  return (count);
}

char **word_length(char *str,char *sep ,char **split, int word)
{
	int	count;
	int	i;
	int j;

	count = 0;
	i = 0;
	j = 0;
	while(j < word)
	{
		while(sep_in_str(str[i],sep) && str[i])
			i++;
		while(!sep_in_str(str[i],sep) && str[i])
		{
			count ++;
			i++;
		}
		split[j] =(char *) malloc (sizeof(char *) * count + 1);
		j++;
		count = 0;
	}
	return (split);
}

char **to_answer(char *str, char *sep,char **split, int word)
{
	int i=0;
	int j=0;
	int k=0;
	while(j < word)
	{
		k = 0;
		while(sep_in_str(str[i],sep) && str[i])
			i++;
		while(!sep_in_str(str[i],sep) && str[i])
		{
			split[j][k] = str[i];
			k++;
			i++;
		}
		split[j][k] = 0;
		j++;
	}
	return (split);
}

char **ft_split(char *str,char *sep)
{
	int	word;
	char	**split;
	int	i;

	if(!str)
		return(0);
	i = 0;
	word = count_word(str,sep);
	split = (char **) malloc (sizeof(char *) * (word + 1));
	if (split == 0)
		return (0);
	split = word_length(str,sep, split, word);
	while(i < word)
	{
		if(split[i] == 0)
			return (0);
		i++;
	}
	split[word] = 0;
	split = to_answer(str,sep,split, word);
	return (split);
}
#include <stdio.h>
int main()
{
	char a[30] ="abcdefghiaaabbbabababababab";
	char b[3]="aa";
	char **str = ft_split(a,b);
	for (int i = 0; i < 1 ; i++)
		printf("%s\n",str[i]);
	return (0);
}
