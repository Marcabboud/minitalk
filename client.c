#include"minitalk.h"

static	int	is_nb(char	*str)
{
	while(*str)
	{
		if (*str < '0' && *str > '9')
			return(0);
		str++;
	}
	return(1);
}

static	void	send_char(int pid, char c)
{
	int	bit;
	
	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(100);
		bit++;
	}
}

static void	client(char *apid, char *msg)
{
	int	pid;
	
	pid = ft_atoi(apid);
	while (*msg)
	{
		send_char(pid, *msg);
		msg++;
	}
	send_char(pid, '\n');
}

int	main(int ac, char **av)
{
	if (ac != 3)
		return(0);
	if (!is_digit(av[1])
		return(0);
	if (av[2][0] == '\0')
		return(0);
	client(av[1], av[2]);
	return(1);
}
