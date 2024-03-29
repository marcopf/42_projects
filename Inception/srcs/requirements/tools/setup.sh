sudo mkdir -p /home/mpaterno/data/mariadb_vol /home/mpaterno/data/wordpress_vol

if [ "$(command -v docker)" == "" ]
then
  sudo apt-get update -y
  sudo apt-get install ca-certificates curl gnupg -y
  sudo install -m 0755 -d /etc/apt/keyrings -y
  curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
  sudo chmod a+r /etc/apt/keyrings/docker.gpg
  echo \
  "deb [arch="$(dpkg --print-architecture)" signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu \
  "$(. /etc/os-release && echo "$VERSION_CODENAME")" stable" | \
  sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
  sudo apt-get update -y
  sudo apt-get install docker-ce docker-ce-cli containerd.io docker-buildx-plugin docker-compose-plugin -y
else
 echo "Docker already installed checking docker-compose..."
fi

if [ "$(command -v docker-compose)" == "" ]
then
  sudo apt-get install docker-compose -y
else
  echo "docker-compose already installed."
fi
echo "docker & docker-compose installed!"

if [ "$(cat /etc/hosts | grep "mpaterno.42.fr")" != "" ]
then
  echo "host is already setted..."
else
  echo "127.0.0.1  mpaterno.42.fr" | sudo tee -a /etc/hosts > /dev/null
  echo "mpaterno settes in /etc/hosts"
fi
