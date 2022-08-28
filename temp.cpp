2222222

プレミスト首里金城町（那覇市）

E:\HTML\make>pwsh .\run.ps1
'pwsh' は、内部コマンドまたは外部コマンド、
操作可能なプログラムまたはバッチ ファイルとして認識されていません。

	→	Powershell 7 をインストール

Warning: PowerShell detected that you might be using a screen reader and has disabled PSReadLine for compatibility purposes. If you want to re-enable it, run 'Import-Module PSReadLine'.		

	→	よくわからなのでとりあえず見送る
	

E:\HTML\make>python     ImgRead.py
Traceback (most recent call last):
  File "E:\HTML\make\ImgRead.py", line 3, in <module>
    from PIL import Image
ModuleNotFoundError: No module named 'PIL'

E:\HTML\make>python
Python 3.10.6 (tags/v3.10.6:9c7b4bd, Aug  1 2022, 21:53:49) [MSC v.1932 64 bit (AMD64)] on win32
Type "help", "copyright", "credits" or "license" for more information.

	→pip コマンドを使用し、Pillow をインストールします。

E:\HTML\make>pip install pillow
Collecting pillow
  Downloading Pillow-9.2.0-cp310-cp310-win_amd64.whl (3.3 MB)
     ---------------------------------------- 3.3/3.3 MB 8.0 MB/s eta 0:00:00
Installing collected packages: pillow
Successfully installed pillow-9.2.0

[notice] A new release of pip available: 22.2.1 -> 22.2.2
[notice] To update, run: python.exe -m pip install --upgrade pip]


E:\HTML\make>del C:\Users\ATHUSHI\Desktop\HTML\image\*.*
指定されたパスが見つかりません。


cd e:\Firabase_tanagaa
スクリプトの実行を一時的に有効にするため
Set-ExecutionPolicy RemoteSigned -Scope Process
cd e:\Urugai27
firebase init

Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

警告: PowerShell により、スクリーン リーダーを使用している可能性があること、および互換性のために PSReadLine が無効になっている可能性が検出されました。再度有効にするには、'Import-Module PSReadLine' を実行してください。

PS C:\Users\uehar> cd e:\Firabase_tanagaa
PS E:\Firabase_tanagaa> Set-ExecutionPolicy RemoteSigned -Scope Process

実行ポリシーの変更
実行ポリシーは、信頼されていないスクリプトからの保護に役立ちます。実行ポリシーを変更すると、about_Execution_Policies
のヘルプ トピック (https://go.microsoft.com/fwlink/?LinkID=135170)
で説明されているセキュリティ上の危険にさらされる可能性があります。実行ポリシーを変更しますか?
[Y] はい(Y)  [A] すべて続行(A)  [N] いいえ(N)  [L] すべて無視(L)  [S] 中断(S)  [?] ヘルプ (既定値は "N"): y
PS E:\Firabase_tanagaa> firebase deploy

Error: Not in a Firebase app directory (could not locate firebase.json)
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: tanagaa-67b70 (tanagaa)
i  Using project tanagaa-67b70 (tanagaa)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? public
? Configure as a single-page app (rewrite all urls to /index.html)? Yes
? Set up automatic builds and deploys with GitHub? No
+  Wrote public/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Firabase_tanagaa> firabese deploy
firabese : 用語 'firabese' は、コマンドレット、関数、スクリプト ファイル、または操作可能なプログラムの名前として認識さ
れません。名前が正しく記述されていることを確認し、パスが含まれている場合はそのパスが正しいことを確認してから、再試行し
てください。
発生場所 行:1 文字:1
+ firabese deploy
+ ~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (firabese:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 1 files in public
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 1 files in public
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices.

Error: Must select at least one feature. Use SPACEBAR to select features, or specify a feature by running firebase init [feature_name]
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices.

Error: Must select at least one feature. Use SPACEBAR to select features, or specify a feature by running firebase init [feature_name]

Having trouble? Try firebase [command] --help
PS E:\Firabase_tanagaa>  firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: tanagaa-67b70 (tanagaa)
i  Using project tanagaa-67b70 (tanagaa)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? public
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote public/404.html
+  Wrote public/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in public
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in public
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: tanagaa-67b70 (tanagaa)
i  Using project tanagaa-67b70 (tanagaa)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? tanagaa
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote tanagaa/404.html
+  Wrote tanagaa/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in tanagaa
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in tanagaa
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting

Error: Specified "public" directory "tanagaa" does not exist, can't deploy hosting to site "tanagaa-67b70"
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in tanagaa
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> mkdir e:\html5


    ディレクトリ: E:\


Mode                 LastWriteTime         Length Name
----                 -------------         ------ ----
d-----        2022/08/25     16:46                html5


PS E:\Firabase_tanagaa> cd e:\html5
PS E:\html5> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\html5

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: album-220b3 (album)
i  Using project album-220b3 (album)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? album
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote album/404.html
+  Wrote album/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\html5> firebase deploy

=== Deploying to 'album-220b3'...

i  deploying hosting
i  hosting[album-220b3]: beginning deploy...
i  hosting[album-220b3]: found 2 files in album
+  hosting[album-220b3]: file upload complete
i  hosting[album-220b3]: finalizing version...
+  hosting[album-220b3]: version finalized
i  hosting[album-220b3]: releasing new version...
+  hosting[album-220b3]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/album-220b3/overview
Hosting URL: https://album-220b3.web.app
PS E:\html5> firabase deploy
firabase : 用語 'firabase' は、コマンドレット、関数、スクリプト ファイル、または操作可能なプログラムの名前として認識さ
れません。名前が正しく記述されていることを確認し、パスが含まれている場合はそのパスが正しいことを確認してから、再試行し
てください。
発生場所 行:1 文字:1
+ firabase deploy
+ ~~~~~~~~
    + CategoryInfo          : ObjectNotFound: (firabase:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS E:\html5> firebase deploy

=== Deploying to 'album-220b3'...

i  deploying hosting
i  hosting[album-220b3]: beginning deploy...
i  hosting[album-220b3]: found 2 files in album
+  hosting[album-220b3]: file upload complete
i  hosting[album-220b3]: finalizing version...
+  hosting[album-220b3]: version finalized
i  hosting[album-220b3]: releasing new version...
+  hosting[album-220b3]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/album-220b3/overview
Hosting URL: https://album-220b3.web.app
PS E:\html5> cd e:\Firabase_tanagaa
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: tanagaa-67b70 (tanagaa)
i  Using project tanagaa-67b70 (tanagaa)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? public
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote public/404.html
+  Wrote public/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in public
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app
PS E:\Firabase_tanagaa> cd e:\Urugai27
PS E:\Urugai27> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Urugai27

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: urugai27 (Urugai27)
i  Using project urugai27 (Urugai27)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? public
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote public/404.html
+  Wrote public/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Urugai27> firebase deploy

=== Deploying to 'urugai27'...

i  deploying hosting
i  hosting[urugai27]: beginning deploy...
i  hosting[urugai27]: found 2 files in public
+  hosting[urugai27]: file upload complete
i  hosting[urugai27]: finalizing version...
+  hosting[urugai27]: version finalized
i  hosting[urugai27]: releasing new version...
+  hosting[urugai27]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/urugai27/overview
Hosting URL: https://urugai27.web.app
PS E:\Urugai27> firebase deploy

=== Deploying to 'urugai27'...

i  deploying hosting
i  hosting[urugai27]: beginning deploy...
i  hosting[urugai27]: found 2 files in public
+  hosting[urugai27]: file upload complete
i  hosting[urugai27]: finalizing version...
+  hosting[urugai27]: version finalized
i  hosting[urugai27]: releasing new version...
+  hosting[urugai27]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/urugai27/overview
Hosting URL: https://urugai27.web.app
PS E:\Urugai27>


https://tanagaa-67b70.web.app		https://tanagaa-67b70.firebaseapp.com/index 	https://tanagaa-67b70.web.app/index.html

https://album-220b3.web.app

 https://console.firebase.google.com/project/tanagaa-67b70/overview

Visual Studio Code（VSCode）d:\

firebase deploy

PS E:\Firabase_tanagaa> firebase deploy

=== Deploying to 'tanagaa-67b70'...

i  deploying hosting
i  hosting[tanagaa-67b70]: beginning deploy...
i  hosting[tanagaa-67b70]: found 2 files in tanagaa
+  hosting[tanagaa-67b70]: file upload complete
i  hosting[tanagaa-67b70]: finalizing version...
+  hosting[tanagaa-67b70]: version finalized
i  hosting[tanagaa-67b70]: releasing new version...
+  hosting[tanagaa-67b70]: release complete

+  Deploy complete!

Project Console: https://console.firebase.google.com/project/tanagaa-67b70/overview
Hosting URL: https://tanagaa-67b70.web.app			← 間違っている！	← ではなくあたっている
PS E:\Firabase_tanagaa>

###

cd e:\Firabase_tanagaa

Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

PS C:\Users\uehar> node --version
v16.17.0
PS C:\Users\uehar> npm install -g firebase-tools
npm WARN deprecated request@2.88.2: request has been deprecated, see https://github.com/request/request/issues/3142
npm WARN deprecated uuid@3.4.0: Please upgrade  to version 7 or higher.  Older versions may use Math.random() in certain circumstances, which is known to be problematic.  See https://v8.dev/blog/math-random for details.
npm WARN deprecated debug@4.1.1: Debug versions >=3.2.0 <3.2.7 || >=4 <4.3.1 have a low-severity ReDos regression when used in a Node.js environment. It is recommended you upgrade to 3.2.7 or 4.3.1. (https://github.com/visionmedia/debug/issues/797)
npm WARN deprecated har-validator@5.1.3: this library is no longer supported

added 706 packages, and audited 707 packages in 27s

39 packages are looking for funding
  run `npm fund` for details

9 vulnerabilities (6 moderate, 3 high)

To address issues that do not require attention, run:
  npm audit fix

To address all issues (including breaking changes), run:
  npm audit fix --force

Run `npm audit` for details.
npm notice
npm notice New minor version of npm available! 8.15.0 -> 8.18.0
npm notice Changelog: https://github.com/npm/cli/releases/tag/v8.18.0
npm notice Run npm install -g npm@8.18.0 to update!
npm notice
PS C:\Users\uehar> npm install -g npm@8.18.0

added 1 package, and audited 206 packages in 2s

11 packages are looking for funding
  run `npm fund` for details

found 0 vulnerabilities
PS C:\Users\uehar> firebase login
firebase : このシステムではスクリプトの実行が無効になっているため、ファイル C:\Users\uehar\AppData\Roaming\npm\firebase
.ps1 を読み込むことができません。詳細については、「about_Execution_Policies」(https://go.microsoft.com/fwlink/?LinkID=1
35170) を参照してください。
発生場所 行:1 文字:1
+ firebase login
+ ~~~~~~~~
    + CategoryInfo          : セキュリティ エラー: (: ) []、PSSecurityException
    + FullyQualifiedErrorId : UnauthorizedAccess
PS C:\Users\uehar> Get-ExecutionPolicy
Restricted
PS C:\Users\uehar> Set-ExecutionPolicy RemoteSigned -Scope Process

実行ポリシーの変更
実行ポリシーは、信頼されていないスクリプトからの保護に役立ちます。実行ポリシーを変更すると、about_Execution_Policies
のヘルプ トピック (https://go.microsoft.com/fwlink/?LinkID=135170)
で説明されているセキュリティ上の危険にさらされる可能性があります。実行ポリシーを変更しますか?
[Y] はい(Y)  [A] すべて続行(A)  [N] いいえ(N)  [L] すべて無視(L)  [S] 中断(S)  [?] ヘルプ (既定値は "N"): y
PS C:\Users\uehar> firebase login
i  Firebase optionally collects CLI and Emulator Suite usage and error reporting information to help improve our products. Data is collected in accordance with Google's privacy policy (https://policies.google.com/privacy) and is not used to identify you.

? Allow Firebase to collect CLI and Emulator Suite usage and error reporting information? Yes
i  To change your data collection preference at any time, run `firebase logout` and log in again.

Visit this URL on this device to log in:
https://accounts.google.com/o/oauth2/auth?client_id=563584335869-fgrhgmd47bqnekij5i8b5pr03ho849e6.apps.googleusercontent.com&scope=email%20openid%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcloudplatformprojects.readonly%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Ffirebase%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcloud-platform&response_type=code&state=1042067851&redirect_uri=http%3A%2F%2Flocalhost%3A9005

Waiting for authentication...

+  Success! Logged in as athushiuehara@gmail.com

##########

PS C:\Users\uehar> cd e:\Firabase_tanagaa
PS E:\Firabase_tanagaa> firebase init

     ######## #### ########  ######## ########     ###     ######  ########
     ##        ##  ##     ## ##       ##     ##  ##   ##  ##       ##
     ######    ##  ########  ######   ########  #########  ######  ######
     ##        ##  ##    ##  ##       ##     ## ##     ##       ## ##
     ##       #### ##     ## ######## ########  ##     ##  ######  ########

You're about to initialize a Firebase project in this directory:

  E:\Firabase_tanagaa

? Are you ready to proceed? Yes
? Which Firebase features do you want to set up for this directory? Press Space to select features, then Enter to confir
m your choices. Hosting: Configure files for Firebase Hosting and (optionally) set up GitHub Action deploys

=== Project Setup

First, let's associate this project directory with a Firebase project.
You can create multiple project aliases by running firebase use --add,
but for now we'll just set up a default project.

? Please select an option: Use an existing project
? Select a default Firebase project for this directory: tanagaa-67b70 (tanagaa)
i  Using project tanagaa-67b70 (tanagaa)

=== Hosting Setup

Your public directory is the folder (relative to your project directory) that
will contain Hosting assets to be uploaded with firebase deploy. If you
have a build process for your assets, use your build's output directory.

? What do you want to use as your public directory? tanagaa
? Configure as a single-page app (rewrite all urls to /index.html)? No
? Set up automatic builds and deploys with GitHub? No
+  Wrote tanagaa/404.html
+  Wrote tanagaa/index.html

i  Writing configuration info to firebase.json...
i  Writing project information to .firebaserc...
i  Writing gitignore file to .gitignore...

+  Firebase initialization complete!
PS E:\Firabase_tanagaa>

######

Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

PS C:\Users\uehar> node --version
v16.17.0
Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

#### firebase login　を実行するとエラーになる


PS C:\Users\uehar> firebase login
firebase : このシステムではスクリプトの実行が無効になっているため、ファイル C:\Users\uehar\AppData\Roaming\npm\firebase
.ps1 を読み込むことができません。詳細については、「about_Execution_Policies」(https://go.microsoft.com/fwlink/?LinkID=1
35170) を参照してください。
発生場所 行:1 文字:1
+ firebase login
+ ~~~~~~~~
    + CategoryInfo          : セキュリティ エラー: (: ) []、PSSecurityException
    + FullyQualifiedErrorId : UnauthorizedAccess
PS C:\Users\uehar>

https://www.curict.com/item/d1/d1c4a3e.html

Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

PS C:\Users\uehar> node --version
v16.17.0
PS C:\Users\uehar> npm install -g firebase-tools
npm WARN deprecated request@2.88.2: request has been deprecated, see https://github.com/request/request/issues/3142
npm WARN deprecated uuid@3.4.0: Please upgrade  to version 7 or higher.  Older versions may use Math.random() in certain circumstances, which is known to be problematic.  See https://v8.dev/blog/math-random for details.
npm WARN deprecated debug@4.1.1: Debug versions >=3.2.0 <3.2.7 || >=4 <4.3.1 have a low-severity ReDos regression when used in a Node.js environment. It is recommended you upgrade to 3.2.7 or 4.3.1. (https://github.com/visionmedia/debug/issues/797)
npm WARN deprecated har-validator@5.1.3: this library is no longer supported

added 706 packages, and audited 707 packages in 27s

39 packages are looking for funding
  run `npm fund` for details

9 vulnerabilities (6 moderate, 3 high)

To address issues that do not require attention, run:
  npm audit fix

To address all issues (including breaking changes), run:
  npm audit fix --force

Run `npm audit` for details.
npm notice
npm notice New minor version of npm available! 8.15.0 -> 8.18.0
npm notice Changelog: https://github.com/npm/cli/releases/tag/v8.18.0
npm notice Run npm install -g npm@8.18.0 to update!
npm notice
PS C:\Users\uehar> npm install -g npm@8.18.0

added 1 package, and audited 206 packages in 2s

11 packages are looking for funding
  run `npm fund` for details

found 0 vulnerabilities
PS C:\Users\uehar> firebase login
firebase : このシステムではスクリプトの実行が無効になっているため、ファイル C:\Users\uehar\AppData\Roaming\npm\firebase
.ps1 を読み込むことができません。詳細については、「about_Execution_Policies」(https://go.microsoft.com/fwlink/?LinkID=1
35170) を参照してください。
発生場所 行:1 文字:1
+ firebase login
+ ~~~~~~~~
    + CategoryInfo          : セキュリティ エラー: (: ) []、PSSecurityException
    + FullyQualifiedErrorId : UnauthorizedAccess
PS C:\Users\uehar> Get-ExecutionPolicy
Restricted
PS C:\Users\uehar> Set-ExecutionPolicy RemoteSigned -Scope Process

実行ポリシーの変更
実行ポリシーは、信頼されていないスクリプトからの保護に役立ちます。実行ポリシーを変更すると、about_Execution_Policies
のヘルプ トピック (https://go.microsoft.com/fwlink/?LinkID=135170)
で説明されているセキュリティ上の危険にさらされる可能性があります。実行ポリシーを変更しますか?
[Y] はい(Y)  [A] すべて続行(A)  [N] いいえ(N)  [L] すべて無視(L)  [S] 中断(S)  [?] ヘルプ (既定値は "N"): y
PS C:\Users\uehar> firebase login
i  Firebase optionally collects CLI and Emulator Suite usage and error reporting information to help improve our products. Data is collected in accordance with Google's privacy policy (https://policies.google.com/privacy) and is not used to identify you.

? Allow Firebase to collect CLI and Emulator Suite usage and error reporting information? Yes
i  To change your data collection preference at any time, run `firebase logout` and log in again.

Visit this URL on this device to log in:
https://accounts.google.com/o/oauth2/auth?client_id=563584335869-fgrhgmd47bqnekij5i8b5pr03ho849e6.apps.googleusercontent.com&scope=email%20openid%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcloudplatformprojects.readonly%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Ffirebase%20https%3A%2F%2Fwww.googleapis.com%2Fauth%2Fcloud-platform&response_type=code&state=1042067851&redirect_uri=http%3A%2F%2Flocalhost%3A9005

Waiting for authentication...

+  Success! Logged in as athushiuehara@gmail.com
PS C:\Users\uehar>

######

PS C:\Users\uehar> npm install -g firebase-tools
npm WARN deprecated request@2.88.2: request has been deprecated, see https://github.com/request/request/issues/3142
npm WARN deprecated uuid@3.4.0: Please upgrade  to version 7 or higher.  Older versions may use Math.random() in certain circumstances, which is known to be problematic.  See https://v8.dev/blog/math-random for details.
npm WARN deprecated debug@4.1.1: Debug versions >=3.2.0 <3.2.7 || >=4 <4.3.1 have a low-severity ReDos regression when used in a Node.js environment. It is recommended you upgrade to 3.2.7 or 4.3.1. (https://github.com/visionmedia/debug/issues/797)
npm WARN deprecated har-validator@5.1.3: this library is no longer supported

added 706 packages, and audited 707 packages in 27s

39 packages are looking for funding
  run `npm fund` for details

9 vulnerabilities (6 moderate, 3 high)

To address issues that do not require attention, run:
  npm audit fix

To address all issues (including breaking changes), run:
  npm audit fix --force

Run `npm audit` for details.
npm notice
npm notice New minor version of npm available! 8.15.0 -> 8.18.0
npm notice Changelog: https://github.com/npm/cli/releases/tag/v8.18.0
npm notice Run npm install -g npm@8.18.0 to update!
npm notice
PS C:\Users\uehar>

	--->  npm install -g npm@8.18.0	を投入する


Windows PowerShell
Copyright (C) Microsoft Corporation. All rights reserved.

新機能と改善のために最新の PowerShell をインストールしてください!https://aka.ms/PSWindows

警告: PowerShell により、スクリーン リーダーを使用している可能性があること、および互換性のために PSReadLine が無効になっている可能性が検出されました。再度有効にするには、'Import-Module PSReadLine' を実行してください。

https://seesaawiki.jp/w/kou1okada/d/20220527%3A%20PowerShell%20-%20PSReadLine%20%A4%AC%CC%B5%B8%FA%B7%D9%B9%F0

→ REG ADD "HKEY_CURRENT_USER\Control Panel\Accessibility\Blind Access" /v On /d 0 /f	→	再起動

PS C:\Users\uehar> Import-Module PSReadLine
PS C:\Users\uehar> java -version
java : 用語 'java' は、コマンドレット、関数、スクリプト ファイル、または操作可能なプログラムの名前として認識されません
。名前が正しく記述されていることを確認し、パスが含まれている場合はそのパスが正しいことを確認してから、再試行してくださ
い。
発生場所 行:1 文字:1
+ java -version
+ ~~~~
    + CategoryInfo          : ObjectNotFound: (java:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\uehar>


UiPath も更新が必要です。の表示やめたい

接頭辞		en- ＝ 〜にする		http://www.etn.co.jp/etymology/en/


エラー: The server's host key is not cached. You have no guarantee
that the server is the computer you think it is.
The server's rsa2 key fingerprint is:
ssh-rsa 2048 SHA256:zzXQOXSRBEiUtuE8AikJYKwbHaxvSc0ojez9YXaGp1A
If you trust this host, enter "y" to add the key to
PuTTY's cache and carry on connecting.
If you want to carry on connecting just once, without
adding the key to the cache, enter "n".
If you do not trust this host, press Return to abandon the
connection.
Store key in cache? (y/n, Return cancels connection, i for more info) fatal: Could not read from remote repository.

Please make sure you have the correct access rights
and the repository exists.

rsa dsa ssh-1(rsa) ssh-2

"C:\Program Files\PuTTY\puttygen.exe"

	わかばちゃんと学ぶGit使い方入門(改定２版)  プッシュができない
		https://creating-homepage.com/archives/9213
		
		
https://github.com/uruga/join
GitHubアカウント情報の入力
username:urugai27		

Email:uehara_atusi@nifty.com
パスワード:Tjgo1zjpy


抗原定性検査キット

https://teratail.com/questions/366115
SourceTreeSetup-3.4.5.exe

てぃんさぐぬ花や
爪先（ちみさち）に染（す）みてぃ
親（うや）ぬゆしぐとぅや
肝（ちむ）に染みり

二、
天（てぃん）ぬ群（む）り星（ぶ）しや
読（ゆ）みば読まりしが
親（うや）ぬゆしぐとぅや
読みやならぬ

三、
夜（ゆる）走（は）らす船（ふに）や
子ぬ方星（にぬふぁぶし） 目当（みあ）てぃ
我（わ）ん生（な）ちぇる親（うや）や
我んどぅ目当てぃ

四、
宝玉（たからだま）やてぃん
磨（みが）かにば錆（さび）す
朝夕（あさゆ）肝（ちむ）磨（みが）ち
浮世（うちゆ）渡（わた）ら

五、
誠（まくとぅ）する人や
後や何時（いじ）迄（まで）いん
思事（うむくとぅ）ん叶（かな）てぃ
千代（ちゆ）ぬ栄（さか）い

六、
なしば何事（なんぐとぅ）ん
なゆる事（くとぅ）やしが
なさぬ故（ゆい）からどぅ
ならぬ定み


拡張

Adobe®Photoshop®CS2ReadMe
このファイルには、直前の製品情報とトラブルシューティングのヒントが含まれています。インストール手順については、ユーザーガイドまたはインストール方法のドキュメントを参照してください。トラブルシューティングとパフォーマンスの詳細については、ユーザーガイド、ヘルプ、またはオンラインで入手できるドキュメント「Photoshop CS2のインストールプロセスについて」（http://www.adobe.com/support/techdocs/331296.html）を参照してください。

Adobe Creative Suiteの一部としてPhotoshopを購入した場合は、コンテンツCDの1つにPhotoshopGoodiesフォルダーがあります。 PhotoshopをElectronicSoftwareDownload（ESD）として取得した場合、CD-ROMはありませんが、ダウンロードを解凍した後にハードドライブに作成されたフォルダー構造には、Goodiesフォルダーとこのドキュメントで説明されているその他のフォルダーが含まれます。 WindowsトライアウトからPhotoshopCS2を購入した場合、レシートにトライアウトに含まれていないコンテンツをダウンロードするためのURLが届きます。

シリアル番号情報など、このドキュメントの特定の手順は、多少異なる場合があります。最新情報については、Creative Suite Read Me、またはESDバージョンの購入時に受け取った電子メールの確認を参照してください。

重要：
インストールプロセスの最後にオンラインでPhotoshopのコピーを登録するか、[ヘルプ]メニューの[登録]項目にアクセスしてください。登録カードに記入して、今すぐ郵送することもできます。テクニカルサポートと重要な製品アップデート情報を受け取るには、登録する必要があります。

Photoshopでは、インストールから30日以内にアクティベーションを行う必要があります。詳細については、このReadMeと同じフォルダーにあるActivationReadMe.htmlファイルを参照してください。

シリアルナンバー
CDホルダーの裏表紙に24桁のシリアル番号（例：0000 0000 0000 0000 0000 0000）があります。 ESDのお客様およびWindowsトライアウトから購入したお客様は、オンラインストアの領収書ページと、受け取った電子メールの確認の両方でシリアル番号を確認できます。 Photoshop CS2をインストールするときに、この番号の入力を求められます。

以前のバージョンのPhotoshopからアップグレードする場合は、新しいPhotoshopCS2製品に付属の新しい24桁のシリアル番号を使用する必要があります。以前のバージョンのPhotoshopのインストールに使用したシリアル番号は、PhotoshopCS2のインストールでは機能しません。

Photoshop 5.5より前のバージョンのPhotoshopからアップグレードする場合は、アドビカスタマーサービス（800-833-6687）にインストールの支援を依頼する必要があります。北米以外の場合は、お住まいの地域のアドビカスタマーサービスにご連絡ください。

Photoshop CS2を購入し、以前にPhotoshop LE、AdobePhotoDeluxe®、またはPhotoshopElements®を所有していた場合は、PhotoshopCS2製品に付属のシリアル番号を使用してください。

新しい24桁のシリアル番号が機能しない場合は、アドビカスタマーサービス（800-833-6687）までお問い合わせください。北米以外の場合は、お住まいの地域のアドビカスタマーサービスにお問い合わせください。

オプションの拡張機能とプラグイン
Goodies/オプションのプラグイン/にはいくつかのオプションのプラグインと拡張機能が含まれています。このフォルダーには、いくつかの追加のファイル形式とエクスポートプラグイン、およびフィルタープラグインが含まれています。

Goodies/オプションのプラグイン/Photoshopのみ/オプションの拡張機能/にもいくつかの拡張機能が含まれています。これらの拡張機能を使用すると、さまざまな方法でAdobePhotoshopプログラムをカスタマイズおよび拡張できます。詳細については、オプションの拡張機能に含まれているReadMeファイルを参照してください。

Photoshopでは、設定で2番目のプラグインフォルダを設定できます（Windows：[編集]>[設定]>[プラグインとスクラッチディスク]またはMacOS：[Photoshop]>[設定]>[プラグインとスクラッチディスク]）。 Photoshop7.0以前のプラグインを含むフォルダーを選択しないことをお勧めします。これを行うと、エラーメッセージが表示されます。
サードパーティのプラグインの操作（Macのみ）
将来のOSX開発への準拠を確実にするために、PhotoshopはMacintosh用のプラグインアーキテクチャを刷新しました。 Photoshop CS2に準拠するために、できるだけ多くのサードパーティプラグインをテストするためにあらゆる努力が払われています。サードパーティのプラグインコミュニティの幅を考えると、非互換性は依然として可能性があります。プラグインの更新バージョンを要求するには、プラグイン開発者に直接連絡してください。


________________________________________
Windows®でAdobePhotoshopを使用する
次のセクションには、さまざまなバージョンのWindowsでPhotoshopソフトウェアを使用する際の役立つ情報が含まれています。 （PhotoshopCS2はWindows3.1.x、Windows 95、Windows ME、Windows 98、またはWindows NT 4をサポートしていないことに注意してください。）

共有ファイル
Photoshopによってインストールされた多くのファイル（TWAINサポートファイルやMSVCRT *。*ファイル（Microsoftランタイムファイル）など）は、他のプログラムと共有されます。これらの共有ファイルを使用する他のプログラムをインストールまたはアンインストールすると、Photoshopで使用されるファイルバージョンが上書きまたは削除される場合があります