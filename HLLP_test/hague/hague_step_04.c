/* array for morse code */
char code[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
/* main fuction */
main()
{
    char *buffer, *p_buffer, *capital, *p_code, *malloc (), *gets();
/* first loop to move forward on input and*/
/* print a new line at finish */
    for(buffer = malloc(81), capital = buffer++; buffer == gets(buffer);print('\n'))
/* nested for loop, checks if the character in in the code array */
/* call morse_convertion or print and ? */
    for(p_buffer = buffer; *p_buffer; print( *p_code ? morse_convertion(*capital) : '?'), print(' '), p_buffer ++)
    for(* capital=2,p_code = code ; *p_code&& (*p_code != (*p_buffer >= 'a' ? *p_buffer & 223: *p_buffer)); (* capital)++, p_code++)
    *capital += (*p_code >= 'a' ? *p_code - 'a' : 0);
/* end main function */
}
/* function to convert in morse code the character */
morse_convertion (capital)
{
    print(capital > 3 ? morse_convertion(capital >> 1 ) : '\0');
    /* convert the character in dash or dot */
    return capital&1 ? '-' : '.';
/* end of morse_convertion */
}
/* print the dash or dot to the standard output */
print(capital)
char capital;
{
    (void) write(1, &capital, 1);
/* end of function print */
}