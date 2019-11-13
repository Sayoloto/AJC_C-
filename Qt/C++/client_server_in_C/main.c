#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <bits/sockaddr.h>
#include <netinet/in.h>
#include <errno.h>

#define SA struct sockaddr

int main()
{
    int socker, connfd;
    //Connexion à un serveur
    struct sockaddr;
    struct hostent *hostinfo = NULL;
    struct sockaddr_in serveR, clienT;

    //create a socket
    socker = socket(AF_INET, SOCK_STREAM, 0);
    if (socker == -1)
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
        printf("Socket successfully created..\n");

    //hostinfo = gethostbyname(hostname);

    bzero(&serveR,sizeof(serveR));
    //assign IP address and port
    serveR.sin_addr.s_addr = inet_addr("127.0.0.1");
    serveR.sin_port = htons(2356);
    serveR.sin_family = AF_INET;

    connect(socker, (SA*)&serveR, sizeof(serveR));

    //sending a table of characters over a serve
    char buffer[1024] = "Monsieur Gilles";
    if(send(socker, buffer, strlen(buffer), 0) < 0)
    {
    perror("send()");
    exit(errno);
    }

    //sending a table
    int n = 0;
    if((n = recv(socker, buffer, sizeof buffer - 1, 0)) < 0)
    {
    perror("recv()");
    exit(errno);
    }
    buffer[n] = '\0';

    chat_fun(socker);

    close(socker);

    return 0;
}


void chat_fun(int socker)
{
    char buff[100];
    int n;
    for (;;)
    {
        bzero(buff, sizeof(buff));
        printf("Enter the string : ");
        n = 0;

        while ((buff[n++] = getchar()) != '\n');
        write(socker, buff, sizeof(buff));
        bzero(buff, sizeof(buff));
        read(socker, buff, sizeof(buff));
        printf("From Server : %s", buff);
        if ((strncmp(buff, "exit", 4)) == 0) {
            printf("Client Exit...\n");
            break;
        }
    }
}

