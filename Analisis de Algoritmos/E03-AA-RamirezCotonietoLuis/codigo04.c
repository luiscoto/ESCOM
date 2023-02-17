func FrecuenciaMinNumeros(n){
  int Dimension A[n];
  int i = 0;
  while(i <= n){
    scanf("%i", &A[i]); //    ------>n
    i++;}
  inf f=0;
  i=1;
  while(i <= n){
    ntemp = A[i];//           ------>3(n-1)
    j=1;
    ftemp = 0;
    while(j <= n){
    if(ntemp == A[j])//       ------>n
      ftemp++;//              ------>1
    j++;}
  if (f<ftemp){
    f = ftemp;//              ------>3
    num = ntemp;}
  i++;}
  printf("%i\n", num);
  return;}
