

import random
import discord
import os
from datetime import datetime, time, timedelta
import youtube_dl
import requests
from keepalive import keepalive

ran=random.randint(0,5)
hello=["namaskaram","sugham oke thana","kalyanam onm ayeele","joli onm ayeele","reesult vano","ipo nthina padikana"]
client = discord.Client()
@client.event
async def on_ready():
  print("we have logged in as{0.user} ".format(client))
#message response
@client.event
async def on_message(message):
  if message.author==client.user:
    return
  if message.content in (["Hello","hello","hi"]):
    await message.channel.send(hello[ran])
  elif message.content.startswith("Kerr"):
    await message.channel.send("odiko")
  elif message.author.id == "userid":
     message.channel.send('Shut Up')  
@client.event
async def on_disc(time):
  now = datetime.utcnow()
  if now.time==time(18,53,0):
     time.channel.send("@user")
my_secret = os.environ['bot']
keepalive()

client.run((my_secret))
