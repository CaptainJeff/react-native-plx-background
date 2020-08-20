import { NativeModules } from 'react-native';

type PlxBackgroundType = {
  multiply(a: number, b: number): Promise<number>;
};

const { PlxBackground } = NativeModules;

export default PlxBackground as PlxBackgroundType;
