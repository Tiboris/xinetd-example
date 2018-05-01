# xinetd-example

An example application of a "budgerigar" type of service meant for xinetd socket activation.

Simply compile budgerigar binary using make.

Copy the budgerigar.conf into xinetd.conf.d directory.

Aply the services patch or simply add there service record for budgerigar using:
```
echo -e "budgerigar\t\t60006/tcp" >> /etc/services
```

(Re)start the xinetd daemon.
