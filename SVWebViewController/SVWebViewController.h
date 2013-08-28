//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>
#import "MBProgressHUD.h"
#import "SVModalWebViewController.h"
//#import "CustomViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;

@property (nonatomic, readwrite) SVWebViewControllerAvailableActions availableActions;
@property (nonatomic, strong) NSURL *URL;
//@property (weak, nonatomic) IBOutlet UIImageView *noReachabilityImageView;
@property (nonatomic, strong) MBProgressHUD * currentLoader;
@property (strong, nonatomic) IBOutlet UIView *noConnectionView;
@end
