//write a c program to count total number of vowel and consonent in a string.
 #include<stdio.h>
 #include<string.h>
 int main()
 {
     char str[30];
  int len,vowel,consonant;
  printf("enter any string: ");
  gets(str);

  vowel=0;
  consonant=0;
  len=strlen(str);

  for(int i=0;i<len;i++)
  {
    
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
           {
            vowel++;
           }
        else
        {
            consonant++;
        }
    }
  }
  printf("Total number of vowel is: %d\n",vowel);
  printf("Total number of consonent is: %d\n",consonant);

    return 0;
 }
