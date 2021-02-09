FROM gitpod/workspace-full-vnc

USER root

RUN apt-get update && apt-get install -y \
libglfw3-dev \
libgl1 \
libxinerama-dev \
libxcursor-dev \
libxi-dev \
libglx

USER gitpod

RUN wget -qO - https://packages.lunarg.com/lunarg-signing-key-pub.asc | sudo apt-key add -
RUN sudo wget -qO /etc/apt/sources.list.d/lunarg-vulkan-1.2.162-focal.list https://packages.lunarg.com/vulkan/1.2.162/lunarg-vulkan-1.2.162-focal.list
RUN sudo apt update
RUN sudo apt install -y vulkan-sdk
