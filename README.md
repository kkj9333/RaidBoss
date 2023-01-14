# **RaidBoss**
这是一个仿劫掠bossbar而创建的快捷接口，目的是在bds端实现更加自定义化的模拟劫掠<br>
玩家在创建好的区域会提示bossbar信息，同时根据设置来显示目前劫掠的进度条等信息,目前还属于测试阶段<br>
项目采用多线程优化，但是由于不了解bds线程运行流程，所以有时候会有些特性，可以看成并发编程练习..<br>
图片如下：<br>
![image](https://user-images.githubusercontent.com/51207072/212121139-286bc3a7-67cc-40a6-9b8c-960bcf8840ce.png)<br>
```javascript
20:18:01 INFO [Server] raidboss:
20:18:01 INFO [Server] a custom bossevent system
20:18:01 INFO [Server] Usage:
20:18:01 INFO [Server] - /raidboss bind <event: string> <entity: target> <tracesound: Boolean>
20:18:01 INFO [Server] - /raidboss create <event: string> <from: x y z> <to: x y z> <titlename: string> [percentage: float] [dimid: Dimension] [roundnum: int]
20:18:01 INFO [Server] - /raidboss list
20:18:01 INFO [Server] - /raidboss remove <event: string>
20:18:01 INFO [Server] - /raidboss removebind <event: string>
20:18:01 INFO [Server] - /raidboss updatecolor <event: string> <color: bosseventcolor>
20:18:01 INFO [Server] - /raidboss updatepercentage <event: string> <percentage: float>
20:18:01 INFO [Server] - /raidboss updateround <event: string> <roundnum: int>
20:18:01 INFO [Server] - /raidboss updatetitle <event: string> <titlename: string>
```
