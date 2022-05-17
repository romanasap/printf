#include "main.h"

/**
 *identifier - selects the right function corresponding to format specified
 *@ch:input format
 *Return:pointer to function that corresponds with specified format
 *
 */
int (*identifier(char ch))(va_list)
{
	      int count = 0;
	      ops_f print_op[] = {
	      	      {'c', print_char},
                {'s', print_string},
                {'d', print_num},
                {'i', print_num},
                {'\0', NULL}
	      };
	      while (print_op[count].operation)
	      {
	      	      if (ch == print_op[count].operation)
	      	      {
	      	      	      return (print_op[count].func);
	      	      }
	      	      count++;
      
	      }
	      return (NULL);
}
