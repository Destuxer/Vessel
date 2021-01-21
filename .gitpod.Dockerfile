FROM gitpod/workspace-full-vnc

USER root

RUN apt-get update && apt-get install -y \
libglfw3-dev \
libgl1
RUN sudo apt install nvidia-driver-440