## Part 1. Готовый докер

![Уinstall docker](./Screenshots/1.0_install_docker.png)
> Рисунок 1.0. Устанавливаем docker.

![docker pull](./Screenshots/1.1_docker_pull.png)
> Рисунок 1.1. Берем официальный докер образ с nginx и выкачиваем его при помощи "docker pull".

![docker images/docker run](./Screenshots/1.1.docker_images_run.png)
> Рисунок 1.2. Проверяем наличие докер образа через "docker images" и запускаем с помощью "docker run".

![docker ps](./Screenshots/1.1.docker_ps.png)
> Рисунок 1.3. Проверяем, что образ запустился через "docker ps".

![docker inspect](./Screenshots/1.1.docker_inspect.png)
> Рисунок 1.4. Смотрим информацию о контейнере через "docker inspect". 

![docker inspect](./Screenshots/1.1.size.png)
> Рисунок 1.5. Размер контейнера 

![docker inspect](./Screenshots/1.1.port.png)
> Рисунок 1.6. Cписок замапленных портов: 80/tcp. 

![docker inspect](./Screenshots/1.1.Network_settings.png)
> Рисунок 1.7. IP контейнера - 172.17.0.2. 

![docker stop и docker ps](./Screenshots/1.1.stop.png)
> Рисунок 1.8. Остановка докер-образа через "docker stop" и проверка, что образ остановился через "docker ps". 

![docker run](./Screenshots/1.1.run.png)
> Рисунок 1.9. Запускаем докер с замапленными портами 80 и 443 на локальную машину через команду run. 

![docker localhost](./Screenshots/1.1.brow.png)
> Рисунок 2.0. Проверяем, что в браузере по адресу localhost:80 доступна стартовая страница nginx 

![curl](./Screenshots/1.1.curl.png)
> Рисунок 2.1. Проверяем доступность стартовой страницы nginx с помощью команды "curl"

![docker restart](./Screenshots/1.1.restart.png)
> Рисунок 2.2. Перезапускаем докер контейнер через "docker restart" и проверяем командой ps и в браузере, что есть процесс и nginx доступен. 

## Part 2. Операции с контейнером

![docker exec](./Screenshots/2.1.nginx_conf.png)
> Рисунок 2.3. Чтение nginx.conf внутри докер контейнера с помощью команды "exec".

![nginx.conf](./Screenshots/2.1.new_nginx_conf.png)
> Рисунок 2.4. Создаем на локальной машине файл nginx.conf и настраиваем в нем по пути /status отдачу страницы статуса сервера nginx.

![docker cp nginx.conf](./Screenshots/2.1.docker_cp.png)
> Рисунок 2.5. Скопируем созданный файл nginx.conf внутрь докер образа через команду docker cp.

![docker reload](./Screenshots/2.1.reload.png)
> Рисунок 2.6. Перезапуск nginx внутри докер образа через команду exec.

![localhost:80/status](./Screenshots/2.1.status.png)
> Рисунок 2.6. По адресу localhost:80/status отдается страничка со статусом сервера nginx.

![container.tar](./Screenshots/2.1.tar.png)
> Рисунок 2.7. Экспортируем контейнер в файл container.tar через команду export.

![docker stop](./Screenshots/2.1.docker_stop2.png)
> Рисунок 2.8. Остановим контейнер.

![docker rmi](./Screenshots/2.1.delete.png)
> Рисунок 2.9. Удалим образ через "docker rmi", не удаляя перед этим контейнеры.

![docker rm container](./Screenshots/2.1.del_cont.png)
> Рисунок 3.0. Удаляем остановленный контейнер.

![docker import](./Screenshots/2.1.import.png)
> Рисунок 3.1. Импортируем докер образ из архива.

![docker run](./Screenshots/2.1.after_import.png)
> Рисунок 3.2. Запускаем импортированный контейнер.

![localhost](./Screenshots/2.1.localhost_after.png)
> Рисунок 3.3. Проверяем, что по адресу localhost:80/status отдается страничка со статусом сервера nginx