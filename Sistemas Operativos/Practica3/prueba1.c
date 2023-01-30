#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(void){
  pid_t proc;
  int a,b,c,d,e,f,g;
  for(a=1;a<=10;a++){
    proc=fork();
    if(proc){
      printf("Soy el proceso %d\n",getpid());
      wait(0);
    }
    else{
      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
      wait(0);
      if(a==1){
        for(b=1;b<=8;b++){
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            if(b==1){
              for(c=1;c<=6;c++){
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  if(c==1){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  if(c==2){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==3){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==4){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==5){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==6){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  exit(0);
                }
              }
              exit(0);
            }
            if(b==2){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==3){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==4){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==5){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==1){
              for(c=1;c<=6;c++){
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  if(c==1){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  if(c==2){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==3){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==4){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==5){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==6){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  exit(0);
                }
              }
              exit(0);
            }
            exit(0);
          }
        }
        exit(0);
      }
      if(a==2){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==3){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==4){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==5){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==6){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==7){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==8){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==9){
        proc=fork();
        if(proc){
          printf("Soy el proceso %d\n",getpid());
          wait(0);
        }
        else{
          printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
          wait(0);
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            proc=fork();
            if(proc){
              printf("Soy el proceso %d\n",getpid());
              wait(0);
            }
            else{
              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
              wait(0);
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                exit(0);
              }
              exit(0);
            }
            exit(0);
          }
          exit(0);
        }
      }
      if(a==10){
        for(b=1;b<=8;b++){
          proc=fork();
          if(proc){
            printf("Soy el proceso %d\n",getpid());
            wait(0);
          }
          else{
            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
            wait(0);
            if(b==1){
              for(c=1;c<=6;c++){
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  if(c==1){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  if(c==2){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==3){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==4){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==5){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==6){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  exit(0);
                }
              }
              exit(0);
            }
            if(b==2){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==3){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==4){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==5){
              proc=fork();
              if(proc){
                printf("Soy el proceso %d\n",getpid());
                wait(0);
              }
              else{
                printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                wait(0);
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  proc=fork();
                  if(proc){
                    printf("Soy el proceso %d\n",getpid());
                    wait(0);
                  }
                  else{
                    printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                    wait(0);
                    exit(0);
                  }
                  exit(0);
                }
                exit(0);
              }
            }
            if(b==1){
              for(c=1;c<=6;c++){
                proc=fork();
                if(proc){
                  printf("Soy el proceso %d\n",getpid());
                  wait(0);
                }
                else{
                  printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                  wait(0);
                  if(c==1){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  if(c==2){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==3){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==4){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==5){
                    proc=fork();
                    if(proc){
                      printf("Soy el proceso %d\n",getpid());
                      wait(0);
                    }
                    else{
                      printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                      wait(0);
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        exit(0);
                      }
                      exit(0);
                    }
                  }
                  if(c==6){
                    for(d=1;d<=4;d++){
                      proc=fork();
                      if(proc){
                        printf("Soy el proceso %d\n",getpid());
                        wait(0);
                      }
                      else{
                        printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                        wait(0);
                        if(d==1){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        if(d==2){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==3){
                          proc=fork();
                          if(proc){
                            printf("Soy el proceso %d\n",getpid());
                            wait(0);
                          }
                          else{
                            printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                            wait(0);
                            exit(0);
                          }
                        }
                        if(d==4){
                          for(e=1;e<=2;e++){
                            proc=fork();
                            if(proc){
                              printf("Soy el proceso %d\n",getpid());
                              wait(0);
                            }
                            else{
                              printf("soy el hijo %d, mi padre es %d\n",getpid(),getppid());
                              wait(0);
                              exit(0);
                            }
                          }
                          exit(0);
                        }
                        exit(0);
                      }
                    }
                    exit(0);
                  }
                  exit(0);
                }
              }
              exit(0);
            }
            exit(0);
          }
        }
        exit(0);
      }
      exit(0);
    }
  }
  return 0;
}
