//
//  SVWebViewController.h
//
//  Created by Sam Vermette on 08.11.10.
//  Copyright 2010 Sam Vermette. All rights reserved.
//
//  https://github.com/samvermette/SVWebViewController

#import <MessageUI/MessageUI.h>

#import "SVModalWebViewController.h"

@interface SVWebViewController : UIViewController

- (id)initWithAddress:(NSString*)urlString;
- (id)initWithURL:(NSURL*)URL;

@property (nonatomic, strong) NSURL *URL;
@property BOOL isAlreadyLoad;
@property (weak, nonatomic) IBOutlet UIImageView *noReachabilityImageView;

- (void)goBackClicked:(UIBarButtonItem *)sender;

@end
