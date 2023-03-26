output
standard output

As the guys fried the radio station facilities, the school principal gave them tasks as a punishment. Dustin's task was to add comments to nginx configuration for school's website. The school has n servers. Each server has a name and an ip (names aren't necessarily unique, but ips are). Dustin knows the ip and name of each server. For simplicity, we'll assume that an nginx command is of form "command ip;" where command is a string consisting of English lowercase letter only, and ip is the ip of one of school servers.

Each ip is of form "a.b.c.d" where a, b, c and d are non-negative integers less than or equal to 255 (with no leading zeros). The nginx configuration file Dustin has to add comments to has m commands. Nobody ever memorizes the ips of servers, so to understand the configuration better, Dustin has to comment the name of server that the ip belongs to at the end of each line (after each command). More formally, if a line is "command ip;" Dustin has to replace it with "command ip; #name" where name is the name of the server with ip equal to ip.

Dustin doesn't know anything about nginx, so he panicked again and his friends asked you to do his task for him.