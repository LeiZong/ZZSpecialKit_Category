//
//  CTMediator+Special.h
//  ZZSpecialKit_Category
//
//  Created by Leasing on 2018/6/17.
//

#import <UIKit/UIKit.h>
#import <CTMediator/CTMediator.h>
#import <ZZAPIsKit/APIRequest.h>
#import <ZZAPIsKit/FFReformProtocol.h>

@interface CTMediator (Special)

- (UIViewController*)specialDetailController;

- (NSDictionary*)specialReformerWithOriginData:(NSDictionary*)data;

- (NSDictionary *)specialReformer;

- (APIRequest*)specialAPIRequest;

@end
