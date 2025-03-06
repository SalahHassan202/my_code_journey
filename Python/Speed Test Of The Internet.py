# Speed Test Of The Internet
from speedtest import Speedtest          # to install this library ===> pip install speedtest-cli 

wifi = Speedtest()     

print("Getting Downlood Speed...")
download = wifi.download()
print(f"Download : {download / 1024 / 1024 :.2f} mbps " )  # convert from bit to mega ====> (bit to kilo then mega )===>   (number/1024 /1024)
print("#############################")
print("Getting Upload Speed...")
upload = wifi.upload ()
print(f"upload : {upload / 1024 / 1024 :.2f} mbps ")         # convert from bit to mega ====> (bit to kilo then mega )===>   (number/1024 /1024)
