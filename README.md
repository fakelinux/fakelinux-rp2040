# FakeLinux for rp2040

## install toolchan 
```bash
sudo apt install gcc-arm-none-eabi cmake gcc g++
```

## install submodule
```bash
cd fakelinux-rp2040
git submodule update --init
cd pico-sdk
git submodule update --init
```

## build

```bash
cd fakelinux-rp2040
bash ./build.sh
```
