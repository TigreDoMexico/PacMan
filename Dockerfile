FROM gcc
WORKDIR /source
RUN apt-get update -y && apt-get install -y libglfw3-dev libgl1-mesa-dev libglu1-mesa-dev
