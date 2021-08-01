char code[]="ETIANMSURWDKGOHVFaLaPJBXCYZQb54a3d2f16g7c8a90l?e'b.s;i,d:";
main()
{
    char *buffer, *p_buffer, *capital, *p_code, *malloc (), *gets();
    for(buffer = malloc(81), capital = buffer++; buffer == gets(buffer);print('\n'))
    for(p_buffer = buffer; *p_buffer; print( *p_code ? morse_convertion(*capital) : '?'), print(' '), p_buffer ++)
    for(* capital=2,p_code = code ; *p_code&& (*p_code != (*p_buffer >= 'a' ? *p_buffer & 223: *p_buffer)); (* capital)++, p_code++)
    *capital += (*p_code >= 'a' ? *p_code - 'a' : 0);
}
morse_convertion (capital)
{
    print(capital > 3 ? morse_convertion(capital >> 1 ) : '\0');
    return capital&1 ? '-' : '.';
}
print(capital)
char capital;
{
    (void) write(1, &capital, 1);
}