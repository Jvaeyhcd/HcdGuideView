HcdGuideView
------
[![Version](https://img.shields.io/cocoapods/v/HcdGuideView.svg?style=flat)](http://cocoapods.org/pods/HcdGuideView)
[![Platform](https://img.shields.io/cocoapods/p/HcdGuideView.svg)](http://cocoapods.org/pods/HcdGuideView)
[![License](https://img.shields.io/github/license/Jvaeyhcd/HcdGuideView.svg)](http://cocoapods.org/pods/HcdGuideView)
[![Tag](https://img.shields.io/github/tag/Jvaeyhcd/HcdGuideView.svg
)](http://cocoapods.org/pods/HcdGuideView)
[![Author](https://img.shields.io/badge/author-Jvaeyhcd-f07c3d.svg)](http://www.jvaeyhcd.cc)
[![Author](https://img.shields.io/badge/English-README-ff69b4.svg)](https://github.com/Jvaeyhcd/HcdGuideView/blob/master/README.md)

`HcdGuideView`让你为你的app添加一个漂亮的启动页变得简单。

![图片](https://raw.githubusercontent.com/Jvaeyhcd/HcdGuideView/master/screen.gif)

### 要求
* Xcode 6 or higher
* iOS 7.0 or higher
* ARC

### 安装方法
#### 手动安装

所有你需要做的就是将`HcdGuideView`文件加下的所有文件导入到你自己的项目中去，然后在你需要使用的地方导入`#include "HcdGuideView.h"`就可以了。

#### Cocoapods

我推荐的一个安装`HcdGuideView`的方法是通过[CocoaPods](https://cocoapods.org/)管理包工具来安装，因为它能自动配置到你的项目工程中来。首先最好将CocoaPods更新到最新版本的，你可以通过Homebrew来安装CocoaPods。

如果你还没有安装Cocoapods的话你可以按照[《CocoaPods安装和使用教程》](http://www.jvaeyhcd.cc/2016/02/20/CocoaPods%E5%AE%89%E8%A3%85%E5%92%8C%E4%BD%BF%E7%94%A8%E6%95%99%E7%A8%8B/) 这篇文章来进行安装。

安装好CocosPods后，打开终端切换到你的工程所在目录：
``` bash
$ cd /path/to/YourProject
$ touch Podfile
$ edit Podfile
```

然后编辑Podfile文件并且添加`HcdGuideView`：
``` bash
pod 'HcdGuideView'
```

安装到你的工程中：
``` bash
$ pod install
```

然后打开目录下的*.xcworkspace文件
``` bash
$ open YourProject.xcworkspace
```
这样就集成成功了，如果出现错误，可能是Cocoapods版本太低，请更新到最新版本。如果是找不到`HcdGuideView`，请重新`pod setup`一次，然后再`pod search HcdGuideView`看看。

### 示例

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

你可以将上面代码放到你想要显示的引导页的地方，一般都放在AppDelegate中。

### Contact me

如果你发现了一些bug或者有什么建议，请联系我或者直接提交issue给我，谢谢！

* 邮箱: chedahuang@icloud.com
