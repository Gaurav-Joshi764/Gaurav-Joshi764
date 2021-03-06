#include<stdio.h>
#include<sys/socket.h>
#include<unistd.h>
#include<sys/types.h>
#include<string.h>
#include<netinet/in.h>
#include<stdlib.h>

main()
{
    char *serv_ip = "127.0.0.1";
    int sockfd,ret_val;
    struct sockaddr_in servaddr;
    sockfd = socket(AF_INET, SOCK_STREAM,0);

    bzero(&servaddr,sizeof(servaddr));
    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(8000);//TCP port----http
    inet_pton(AF_INET, serv_ip, &servaddr.sin_addr);

    ret_val = connect(sockfd,(struct sockaddr*) &servaddr,  sizeof(servaddr));
    //printf("client established connection with server\n");

    if(ret_val<0)
    {
        perror("connect:");
        exit(1);
    }

    printf("client establish connection with server\n");

    printf("close socket \n");
    close(sockfd);
}