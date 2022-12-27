FROM nginx

COPY ./nginx.conf /etc/nginx/nginx.conf
COPY ./run.sh /home/new_user/run.sh

WORKDIR /home/new_user

RUN apt-get -y update && \
    rm -rf /var/lib/apt/lists/* && \
    chown -R nginx:nginx /home/new_user && chmod -R 755 /home/new_user && \
    chown -R nginx:nginx /var/cache/nginx && \
    chown -R nginx:nginx /var/log/nginx && \
    chown -R nginx:nginx /etc/nginx/conf.d && \
    touch /var/run/nginx.pid && \
    chown -R nginx:nginx /var/run/nginx.pid && \
    chown nginx:nginx /usr/bin/chfn && \
	chown nginx:nginx /usr/bin/chsh && \
	chown nginx:nginx /sbin/unix_chkpwd && \
	chown nginx:nginx /bin/su && \
	chown nginx:nginx /bin/mount && \
	chown nginx:nginx /bin/umount && \
	chown nginx:nginx /usr/bin/chage && \
	chown nginx:nginx /usr/bin/wall && \
	chown nginx:nginx /usr/bin/newgrp && \
	chown nginx:nginx /usr/bin/expiry && \
	chown nginx:nginx /usr/bin/passwd && \
	chown nginx:nginx /usr/bin/gpasswd

USER nginx 

HEALTHCHECK --interval=10m --timeout=5s --retries=3 \
    CMD curl -f http://localhost/ || exit 1

ENTRYPOINT  [ "bash", "./run.sh" ]