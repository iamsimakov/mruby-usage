
chat = ENV['CHAT']
msg = ENV['MSG']

# puts chat
# puts msg

`curl -X POST https://my-send-message-domain/my-secret-action?params=#{chat}&params2=#{msg}`
