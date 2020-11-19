#include<stdio.h>

//int main()
int main(int argc, char *argv[])
{
	int i,line_no;
 printf("There are %d arguments.\n", argc);
 for ( i = 0;i!=argc; ++i)
 {
  printf("%s\n", argv[i]);
 }

 char in_file[] = "program.txt";
 
 //char *in_file = argv[1];
 FILE *input_file = fopen(in_file, "r");

 char out_file[25] ;
 strcpy(out_file, "program.txt");
 //strcpy(out_file, argv[1]);
 strcat(out_file, ".out");//output file name program.txt.out
 FILE *output_file = fopen(out_file, "w");//w=write

 char line[25];
 for (line_no = 1; fgets(line, sizeof(line), input_file) != NULL; ++line_no)
 {
  printf("LINE %d: %s", line_no, line);
  fprintf(output_file, "LINE %d: %s", line_no, line);
  //fputs(line, stdout);
  //fputs(line, output_file);
 }

 if (input_file)
 {
  fclose(input_file);
  fclose(output_file);
 }
 getch();
 return 0;
}
