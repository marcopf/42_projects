FROM alpine

RUN apk update && apk upgrade
RUN apk add nginx openssl

RUN     mkdir -p /etc/ssl
RUN     mkdir -p /run/nginx

RUN     mkdir -p /var/www/html

RUN     openssl req -newkey rsa:2048 \
        -x509 \
        -sha256 \
        -days 365 \
        -nodes \
        -keyout /etc/ssl/mpaterno.42.fr.key \
        -out /etc/ssl/mpaterno.42.fr.crt \
        -subj "/C=IT/ST=Italy/L=Rome/O=42Rome/OU=mpaterno.42.fr/CN=$USER"

COPY    ./conf/nginx.conf /etc/nginx/nginx.conf

ENTRYPOINT [ "nginx", "-g", "daemon off;" ]
