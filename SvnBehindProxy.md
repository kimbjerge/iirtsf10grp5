#How to checkout behind a proxy

# Introduction #
Checking out data from within campus network involves at lot of headacke.

# Details #

**Add Proxy server**
It is not enough to have set-up the system proxy and http\_proxy, svn looks in
~/.subversion/servers for a proxy server

Under [global](global.md) add the following:

http\_proxy\_host = www-cache.iha.dk
http\_proxy\_port =3128