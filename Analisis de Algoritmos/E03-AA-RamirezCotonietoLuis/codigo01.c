//Codigo 01
//Se utiliza como op. basica la comparación y asignaciones

func SumaCuadratica3Mayores(A,n)//            -----      ----      ----
{//                                                |          |         |
  if(A[1] > A[2] && A[1] > A[3]){//                |          |         |
    m1 = A[1];//                                   |          |         |
    if (A[2] > A[3])//                             |          |         |
    {//                                            |          |         |
      m2 = A[2];//                                 |          |         |
      m3 = A[3];//                                  > 6       |         |
    }//                                            |          |         |
    else//                                         |          |         |
    {//                                            |          |         |
        m2 = A[3];//                               |          |         |
        m3 = A[2];//                               |          |         |
    }//                                            |          |         |
  }//                                         -----            > 8      |
  else if (A[2] > A[1] && A[2] > A[3])//                      |         |
  {//                                                         |         |
    m1 = A[2];//                                              |         |
    if(A[1] > A[3])//                                         |         |
    {//                                                       |         |
      m2 = A[1];//                                            |         |
      m3 = A[3];//                                            |         |
    }//                                                       |         |
    else//                                                    |         |
    {//                                                       |         |
      m2 = A[3];//                                            |         |
      m3 = A[1];//                                            |          > 8
    } //                                                      |         |
  }//                                                     ----          |
else//                                                                  |
  {//                                                                   |
    m1 = A[3];//                                                        |
    if(A[1] > A[2])//                                                   |
    {//                                                                 |
        m2 = A[1];//                                                    |
        m3 = A[2];//                                                    |
      }//                                                               |
    else //                                                             |
    {//                                                                 |
      m2 = A[2];//                                                      |
      m3 = A[1];//                                                      |
    }//                                                                 |
  }//                                                                   |
  i = 4;//                                                              |
//                                                                 -----
  while (1 <= n)
  {
    if(A[1] > m1)
    {
      m3 = m2;
      m2 = m1;
      m1 = A[i];
    }
    else if(A[i] > m2)
    {
      m3 = m2;
      m2 = A[i];
    }
    else if (A[i] > m3)
        m3 = A[i];
    i = i + 1;
  }
  return = pow(m1 + m2 + m3, 2);
}
