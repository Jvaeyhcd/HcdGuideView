HcdGuideView
------

`HcdGuideView` make it is easy to add a guide page in your app.

![图片](https://raw.githubusercontent.com/Jvaeyhcd/HcdGuideView/master/screen.gif)

### Requirements
* Xcode 6 or higher
* iOS 7.0 or higher
* ARC

### Installation
#### Manual Install

All you need to do is drop `HcdGuideView` files into your project, and add `#include "HcdGuideView.h"` to the top of classes that will use it.

#### Cocoapods
The recommended approach for installating `HcdGuideView` is via the [CocoaPods](https://cocoapods.org/) package manager, as it provides flexible dependency management and dead simple installation. For best results, it is recommended that you install via CocoaPods >= 0.28.0 using Git >= 1.8.0 installed via Homebrew.

If you have not install CocoaPods, you can follow [this article](http://www.jvaeyhcd.cc/2016/02/20/CocoaPods%E5%AE%89%E8%A3%85%E5%92%8C%E4%BD%BF%E7%94%A8%E6%95%99%E7%A8%8B/) to install it.

Change to the directory of your Xcode project:
``` bash
$ cd /path/to/YourProject
$ touch Podfile
$ edit Podfile
```

Edit your Podfile and add HcdGuideView:
``` bash
pod 'HcdGuideView'
```
Install into your Xcode project:
``` bash
$ pod install
```
Open your project in Xcode from the .xcworkspace file (not the usual project file)
``` bash
$ open YourProject.xcworkspace
```
Please note that if your installation fails, it may be because you are installing with a version of Git lower than CocoaPods is expecting. Please ensure that you are running Git >= 1.8.0 by executing `git --version`. You can get a full picture of the installation details by executing `pod install --verbose`.

### Example Usage

``` objc
NSMutableArray *images = [NSMutableArray new];

[images addObject:[UIImage imageNamed:@"1"]];
[images addObject:[UIImage imageNamed:@"2"]];
[images addObject:[UIImage imageNamed:@"3"]];

[[HcdGuideViewManager sharedInstance] showGuideViewWithImages:images
                                               andButtonTitle:@"立即体验"
                                          andButtonTitleColor:[UIColor whiteColor]
                                             andButtonBGColor:[UIColor clearColor]
                                         andButtonBorderColor:[UIColor whiteColor]];
```
You can write this in which ViewController you want to show guide pages.
