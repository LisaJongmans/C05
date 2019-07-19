# C05

ex00 so far NOT DONE


int   ft_iterative_factorial(int nb)
{
  int answer;
  
  answer = 1;
  while (nb > 1)
  {
    answer = answer * (nb -1);
    nb--;
  }
  return (answer);
}

int   main(void)
{
  int nb;
  
  nb = 1;
  ft_iterative_factorial(nb);
  return (0);
}
