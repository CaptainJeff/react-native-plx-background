import * as React from 'react';

import { StyleSheet, Text, View } from 'react-native';

export default function App() {
  const [result] = React.useState<number | undefined>();

  React.useEffect(() => {
    // PlxBackground.multiply(3, 7).then(setResult);
  }, []);

  return (
    <View style={styles.container}>
      <Text>Result: {result}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
});
